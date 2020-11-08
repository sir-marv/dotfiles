//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
    {"",	"music",	0,	11},
	{"",	"pacpackages",	0,	8},
	{"",	"news",		0,	6},
	/* {"",	"torrent",	20,	7}, */
	{"",	"iplocate",	0, 5},
	{"",	"mailbox",	180, 12},
	{"",	"volume",	0,	10},
	{"",	"battery",	5,	3},
	{"",	"clock",	60,	1},
	{"",	"internet",	0,	4},
};
//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char *delim = " ";
