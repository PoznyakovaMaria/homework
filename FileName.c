#include <stdio.h>
#include <locale.h>
void boat()
{
	puts("               $                  ");
	puts("                $$                ");
	puts("               $_$$               ");
	puts("               $$$                ");
	puts("             $$_&&                ");
	puts("              $$$_&&&&&           ");
	puts("              $_$_&&&&&&          ");
	puts("             $$_$__&&&&&&         ");
	puts("            $$$_$__&&&&&&&        ");
	puts("           $$$$_$__&&&&&&&&       ");
	puts("          $$$$$_$__&&&&&&&&       ");
	puts("        $$$$$$$_$__&&&&&&&&&      ");
	puts("       $$$$$$$$_$__&&&&&&&&&&     ");
	puts("    $_$$$$$$$$$_$__&&&&&&&&&&     ");
	puts("    $$_$________$$$_____$$$$$__$$ ");
	puts("     $$$$$$$$$$$$$$$$$$$$$$$_$$$$.");
	puts("      $$$$$$$$$$$$$$$$$$$$$$$$$$  ");
}

void main()
{

	setlocale(LC_ALL, "RUS");
	puts("��� ���������");
	getchar();
	boat();
}