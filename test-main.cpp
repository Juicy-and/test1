#include <iostream>
#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_session.hpp"
#include "testHeader.h"

TEST_CASE("test func", "[func List]") {
    SECTION("testing func") {

        List list;

        CHECK(list.Empty() == 1);
        CHECK(list.Size() == 0);

        SECTION("Добавление 1 элемента") {
            list.PushBack(10);

            CHECK(list.Size() == 1);
        }
        SECTION("Удаление 1 элемента") {
            list.Clear();

            CHECK(list.Size() == 0);
        }
    }
}

int main()
{
	return Catch::Session().run();
}