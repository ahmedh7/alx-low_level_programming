#include <stdio.h>

int main() {
	    int i;
	        for (i = 0; i <= 2; ++i) {
			        putchar('0' + i % 2);
				        putchar('0' + (i / 2) % 2);

					        if (i != 2) {
							            putchar(',');
								                putchar(' ');
										        }
						    }

		    putchar('\n');

		        return 0;
}

