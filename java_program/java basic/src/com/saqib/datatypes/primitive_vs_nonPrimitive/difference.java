package com.saqib.datatypes.primitive_vs_nonPrimitive;

public class difference {

    public void main(){
        int a = 10;
        int b = a;
        a = 100;

        System.out.println("a = " + a + " - b = " + b);

        Person alex = new Person("alex");
        Person mariam = alex;

        System.out.println("Before changing alex");
        System.out.println(alex.name + " " + mariam.name);

        alex.name = "Alexandre"; 

        System.out.println("After changing alex");
        System.out.println(alex.name + " " + mariam.name);
    }

    static class Person {
        String name;

        Person(String name){
            this.name = name;
        }
    }

}
