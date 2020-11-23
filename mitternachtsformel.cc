#include <iostream>
#include <cmath>

int main(int argc, char** argv)
{
//initiere mit doppelter genauigkeit
double a;
double b;  
double c;
double wurzelteil;
double x1;
double x2;
std::cout << "Gib Wert a ein!: " << std::flush;
std::cin >> a;		
std::cout << "Gib Wert b ein!: " << std::flush;
std::cin >> b;
std::cout << "Gib Wert c ein!: " << std::flush;
std::cin >> c;		
											     //Eingabe wird entsprechend gespeichert

wurzelteil = b * b - 4 * a * c; // Damit ichs nicht immer reinschreiben muss :)

	
	if( a == 0)
	{
		if( b == 0)
		{
			if( c == 0) //wenn a,b und c = 0
			{
				std::cout << "0 = 0, da ja alle 0 sind :)" << std::endl;
			}
			else 		// wenn a und b = 0
			{
				std::cout << "0 = " << c << " ergibt keinen Sinn!" << std::endl;
			}
		}
		else if (c == 0) //wenn a und c = 0
		{
			std::cout << "Jetzt ist x = 0!" << std::endl;
		}
		else 			//wenn a = 0
		{
			x1 = (-c) / b;
			std::cout << "x = " << x1 << " , da jetzt nicht mehr die ABC-Formel verwendet werden muss!" << std::endl;
		}
	}
	else if(wurzelteil > 0)
	{
		x1 = (-b + sqrt(wurzelteil)) / (2 * a);
		x2 = (-b - sqrt(wurzelteil)) / (2*a);
		std::cout << "x1 ist: " << x1 << std::endl;
		std::cout << "x2 ist: " << x2 << std::endl;
	}
	else if(wurzelteil == 0)
	{
		std::cout << "Es gibt nur eine Nullstelle!" << std::endl;
		x1 = -b/(2*a);
		std::cout << "x= " << x1 << std::endl;
	}
	else if(wurzelteil < 0)
	{
		std::cout << "Es gibt keine Nullstellen, da negative Wurzel nicht möglich!" << std::endl;	
	}
return 0;
}
