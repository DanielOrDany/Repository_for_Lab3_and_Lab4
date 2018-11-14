#include <stdio.h>
#include <math.h>

#define arraySize 5
static int temp, startIndex, finalIndex, koeficijent, geometricCount;
static double comeValue;

int geometricMean(int array[arraySize][arraySize]);
void oldArray(int array[arraySize][arraySize]);
void newArray(int array[arraySize][arraySize]);
double algebraicMean(double returnValue);

int main() 
{
   	int Array[arraySize][arraySize]= 
	{
		{66,21,-3,-1,90},
	    {1,74,-2,80,-1},
	    {10,30,20,-50,91},
	    {2,4,5,81,0},
	    {33,69,-5,51,24}
	};

	oldArray(Array);
	newArray(Array);
	algebraicMean(geometricMean(Array));
	system("pause");
}

int geometricMean(int array[arraySize][arraySize]) 
{ 
	  double returnValue = 0;

      for (startIndex = 0; startIndex < arraySize; startIndex++) 
	  {
		  int geometricConst = 1;

		  for (geometricCount = 0;  geometricCount < arraySize;  geometricCount++)
		  {
			  geometricConst = geometricConst * (array[startIndex][geometricCount]);
		  }

		  double doubleConst = 0.0;

		  if (geometricConst>=0) 
		  {
			  doubleConst = doubleConstw(geometricConst*1.0, 0.2);
		  }
		  else 
		  {
			doubleConst = doubleConstw(fabs(geometricConst)*1.0, 0.2);
			doubleConst = (-1)*doubleConst;
		  }

		  printf("\n%d ", startIndex + 1 );
		  printf("GM: %f\n",  doubleConst);

		  returnValue = returnValue + doubleConst;
		
	  }

	  printf("\n\n");
	  return returnValue;
}

double algebraicMean(double comeValue) 
{
	comeValue = comeValue / 5.0;
	printf("AM: %f \n\n", comeValue);
}

void oldArray(int array[arraySize][arraySize]) 
{
	printf("OLD ARRAY: \n\n");

	for ( startIndex = 0; startIndex < arraySize; startIndex++)
	{
		for ( finalIndex = 0; finalIndex < arraySize; finalIndex++)
		{
			printf("%5d", array[startIndex][finalIndex]);
		}

		printf("\n");
	}
}

void newArray(int array[arraySize][arraySize]) 
{
	for (finalIndex = 0; finalIndex < arraySize; finalIndex++)
	{
		for (koeficijent = arraySize - 1; koeficijent >= 0; koeficijent--)
		{
			for (startIndex = 0; startIndex < koeficijent; startIndex++)
			{
				if (array[startIndex][finalIndex] > array[startIndex + 1][finalIndex])
				{
					temp = array[startIndex][finalIndex];
					array[startIndex][finalIndex] = array[startIndex + 1][finalIndex];
					array[startIndex + 1][finalIndex] = temp;
				}
			}
		}
	}

	printf("\nNEW ARRAY:\n\n");

	for (startIndex = 0; startIndex < arraySize; startIndex++)
	{
		for (finalIndex = 0; finalIndex < arraySize; finalIndex++)
		{
			printf("%5d", array[startIndex][finalIndex]);
		}

		printf("\n");
	}

}