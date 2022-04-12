package com.saqib.datatypes.primitive;

public class Primitive {
    byte theByte = -128;
    short theShort = 8_989;
    int theInt = 787_838_334;
    long theLong = 7_878_383_343_245_545_985L;

    float pi = 3.14F;
    double doublePi = 3.1615;
    boolean isAdult = true;
    char nameInitial = 'S';

    public void printAll(){
        System.out.println(theByte);
        System.out.println(theShort);
        System.out.println(theInt);
        System.out.println(theLong);
        System.out.println(pi);
        System.out.println(doublePi);
        System.out.println(isAdult);
        System.out.println(nameInitial);
    }
}
