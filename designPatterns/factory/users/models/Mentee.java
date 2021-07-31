package factory.users.models;

import factory.users.User;

public class Mentee extends User {
    private String position = "mentee";
    private String name;
    private String phoneNumber;

    public Mentee( String name, String phoneNumber) {
        this.name = name;
        this.phoneNumber = phoneNumber;
    }
    @Override
    public String getPosition(){
        return this.position;
    }

    @Override
    public String getName() {
        return this.name;
    }

    @Override
    public String getPhoneNumber() {
        return this.phoneNumber;
    }
}
