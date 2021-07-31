package factory.users;

import factory.users.models.Mentee;
import factory.users.models.Mentor;

public class UserFactory {

    public static User getUser(String type, String name, String phoneNumber){
        if("mentor".equalsIgnoreCase(type)){
            return new Mentor( name, phoneNumber);
        }else if("mentee".equalsIgnoreCase(type)){
            return new Mentee( name, phoneNumber);
        }
        return null;

    }
}
