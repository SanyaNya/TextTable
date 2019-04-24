#include <stdio.h>
#include <stdlib.h>
#include "Table.h"

struct TableBorders borders = DEFAULT_BORDERS;
struct Cell cells[] =
{
	EMPTY_CELL,                                       DEFAULT_CELL(3,1, "Products"),    EMPTY_CELL,                  EMPTY_CELL,
	EMPTY_CELL,                                       DEFAULT_CELL(1,1, "Name"),        DEFAULT_CELL(1,1, "Price"),  DEFAULT_CELL(1,1, "Count"),
	DEFAULT_CELL(1,3, "I\nn\n\ns\nt\no\nr\ne"),       DEFAULT_CELL(1,1, "Product1"),    DEFAULT_CELL(1,1, "45.50"),  DEFAULT_CELL(1,1, "10"),
	EMPTY_CELL,                                       DEFAULT_CELL(1,1, "Product2"),    DEFAULT_CELL(1,1, "5.00"),   DEFAULT_CELL(1,1, "100"),
	EMPTY_CELL,                                       DEFAULT_CELL(1,1, "Product3"),    DEFAULT_CELL(1,1, "415.90"), DEFAULT_CELL(1,1, "5"),
	DEFAULT_CELL(1,3, "I\nn\n\ns\nt\no\nr\na\ng\ne"), DEFAULT_CELL(1,1, "Product1"),    DEFAULT_CELL(1,1, "45.50"),  DEFAULT_CELL(1,1, "100"),
	EMPTY_CELL,                                       DEFAULT_CELL(1,1, "Product2"),    DEFAULT_CELL(1,1, "5.00"),   DEFAULT_CELL(1,1, "1000"),
	EMPTY_CELL,                                       DEFAULT_CELL(1,1, "Product3"),    DEFAULT_CELL(1,1, "415.90"), DEFAULT_CELL(1,1, "50"),
};
struct Table table = { cells, 32, 4, 8, &borders };

int main()
{
	struct TableString tableString = TableToString(&table);

	printf("\n%s", tableString.tableString);

	free(tableString.tableString);

	getchar();

	return 0;
}