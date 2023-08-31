#include <iostream>
#include "catch2/catch_template_test_macros.hpp"
#include "catch2/catch_session.hpp"
#include "testHeader.h"

		List list;
		CHECK(list.Empty() == 1);
		CHECK(list.Size() == 0);
		list.PushBack(10);
		CHECK(list.Size() == 1);
		list.Clear();
		CHECK(list.Size() == 0);
	}
}

int main()
{
	return Catch::Session().run();
}