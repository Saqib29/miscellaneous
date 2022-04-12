package com.saqib.datatypes.non_primitive;

import java.time.LocalDate;

public class NonPrimitive {
    // Non primitive data types AKA reference types
    String name = new String("Amigocode");
    LocalDate now = LocalDate.now();

    public void printAll(){
        System.out.println(name.toUpperCase());
        System.out.println(now +" - " + now.getMonth());
    }
}
