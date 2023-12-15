#include <stdio.h>

int main() {
	    int i;
	        for (i = 0; i <= 7; ++i) {
			        putchar('0' + i % 2);
				        putchar('0' + (i / 2) % 2);
					        putchar('0' + i / 4);

						        if (i != 7) {
								            putchar(',');
									                putchar(' ');
											        }
							    }

		    putchar('\n');

		        return 0;
}

