using namespace std;

#include <stdio.h>
#include <stdlib.h>
#include <getopt.h>
#include <map>

#include "pin.h"
#include "pcf.h"

/* Flag set by ‘--verbose’. */
static int verbose_flag;

int
main(int argc, char **argv)
{

	CPcf pcf;

	pcf.Load("front.ini");


	getchar();


}