/**
@file
Project's main file.
*/

#include "Ext1.hpp"
#include "Ext2.hpp"
#include "component1/myComp1.hpp"
#include "component2/myComp2.hpp"

int main() {
	ext1_pr();
	ext2_pr();

	myComp1(3);

	#ifndef NDEBUG
      myComp2();
	#endif

    return 0;
}
