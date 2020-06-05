#include <iostream>
#include "Customer.h"
#include <gtest/gtest.h>

int main() {

    Customer customer("Olivier");
    customer.addRental( Rental( Movie("Karate Kid"), 7));
    customer.addRental( Rental( Movie( "Avengers: Endgame", Movie::NEW_RELEASE ), 5));
    customer.addRental( Rental( Movie("Snow White", Movie::CHILDRENS), 3 ));

    std::cout << customer.statement() << std::endl;

    return 0;
}


TEST(CustomerStatement, CustomerClassTest) {

    ASSERT_EQ("hello", "hello");
}
