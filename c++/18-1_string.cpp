#include <cstddef>
#include <iostream>
#include <locale>
#include <string>
using namespace std;

int main() {
    // basic_string<>. string, wstring
    {
        // string과 wstring 은 basic_string의 각각의 instanciation 이다
        string string;
        wstring wstring;

        // char 은 1byte 라서 데이터 표현에 한계가 있음,
        //wchar_t는 wide-charactoer/unicode 같은 걸 표현해야 할 때 쓴다.
        // 데이터를 더 많이 표현할 수 있음// 로컬라이제이션해서 판매한다고 하면 wchar_t를 해야할껄
        wchar_t wstring;
    }
    // wstring example
    {
        const wstring texts[] = { "Ñá", "forêt intérêt", "Gesäß", "取消波蘇日奇諾", "日本人のビット", "немного русский", "ένα κομμάτι της ελληνικής", "ਯੂਨਾਨੀ ਦੀ ਇੱਕ ਬਿੱਟ", "کمی از ایران ", "కానీ ఈ ఏమి నరకం ఉంది?", "Но какво, по дяволите, е това?" };
        // 언어팩이 설치가 안되 있으면 출력이 안됨

        locale::global(locale(""));
        wcout.imbue(locale());  // wcout -> wide charactor out

        for (size_t i = 0; i < 12; i++) {
            wcout << texts[i] << endl;
        }
    }

    return 0;
}