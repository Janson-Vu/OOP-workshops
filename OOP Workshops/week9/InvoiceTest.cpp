#include "Invoice.h"

int main(){

    // Testing the constructor and isValidInvoiceCode
    {
        Invoice i1("ABCD");
        if (i1.getInvoiceCode() != "ABCD"){
            std::cout<< "Constructor test 1 failed" << std::endl;
        }
    }

    {
        Invoice i2("AB12");
        if (i2.getInvoiceCode() != "AB12"){
            std::cout<< "Constructor test 2 failed" << std::endl;
        }
    }

    {
        Invoice i3("12");
        if (i3.getInvoiceCode() != "12"){
            std::cout<< "Constructor test 3 failed" << std::endl;
        }
    }

    {
        Invoice i4("");
        if (i4.getInvoiceCode() != ""){
            std::cout<< "Constructor test 3 failed" << std::endl;
        }
    }

    // Testing getInvoiceCode
    {
        Invoice i5("123");
        if (i5.getInvoiceCode() != "123"){
            std::cout<< "getInvoiceCode test 1 failed" << std::endl;
        }
    }

    {
        Invoice i6("SDRF");
        if (i6.getInvoiceCode() != "SDRF"){
            std::cout<< "getInvoiceCode test 2 failed" << std::endl;
        }
    }

    // Testing getDollarsOwed and getDollarsOwed
    {
        Invoice i7("ABCD");
        if (i7.getDollarsOwed() != 0){
            std::cout<< "getDollarsOwed test 1 failed" << std::endl;
        }
    }

    {
        Invoice i8("ABCD");
        i8.addServiceCost(-1);
        if (i8.getDollarsOwed() != -1){
            std::cout<< "getDollarsOwed test 2 failed" << std::endl;
        }
    }

    {
        Invoice i8("ABCD");
        i8.addServiceCost(1);
        if (i8.getDollarsOwed() != 1){
            std::cout<< "getDollarsOwed test 3 failed" << std::endl;
        }
    }

    {
        Invoice i9("ABCD");
        i9.addServiceCost(100000);
        if (i9.getDollarsOwed() != 100000){
            std::cout<< "getDollarsOwed test 4 failed" << std::endl;
        }
    }

    // Test trySetInvoiceCode
    {
        Invoice i10("ABCD");
        if (i10.trySetInvoiceCode("12")){
            std::cout<< "trySetInvoiceCode test 1 failed" << std::endl;
        }
    }

    {
        Invoice i11("ABCD");
        if (i11.trySetInvoiceCode("ABC")){
            std::cout<< "trySetInvoiceCode test 2 failed" << std::endl;
        }
    }

    {
        Invoice i12("");
        if (i12.trySetInvoiceCode("")){
            std::cout<< "trySetInvoiceCode test 3 failed" << std::endl;
        }
    }

    // Test applyDiscount
    {
        Invoice i13("ABCD");
        i13.addServiceCost(100);
        i13.applyDiscount(0.5);
        if (i13.getDollarsOwed()!=50){
            std::cout<< "applyDiscount test 1 failed" << std::endl;
        }
    }

    {
        Invoice i14("ABCD");
        i14.addServiceCost(100);
        i14.applyDiscount(-0.5);
        if (i14.getDollarsOwed()!=150){
            std::cout<< "applyDiscount test 2 failed" << std::endl;
        }
    }

    {
        Invoice i15("ABCD");
        i15.addServiceCost(100);
        i15.applyDiscount(0);
        if (i15.getDollarsOwed()!=100){
            std::cout<< "applyDiscount test 3 failed" << std::endl;
        }
    }

    // Testing computeTax
    {
        Invoice i16("ABCD");
        i16.addServiceCost(100);
        if (i16.computeTax() != 100*0.1f){
            std::cout<< "applyDiscount test 1 failed" << std::endl;
        }
    }

    {
        Invoice i16("ABCD");
        i16.addServiceCost(-100);
        if (i16.computeTax() != -100*0.1f){
            std::cout<< "applyDiscount test 2 failed" << std::endl;
        }
    }

    return 0;
}