#include<stdio.h>
#include<string>
#include<iostream>

using namespace std;

class Meal
{
	public:
		void setFood(string food)
		{
			Food = food;
		}

		void setDrink(string drink)
		{
			Drink = drink;	
		}
		int getFood()
		{
			cout<<Food<<endl;
		}
		int getDrink()
		{
			cout<<Drink<<endl;
		}
		private:
			string Food;
			string Drink;

};

class  MealBuilder
{
	public:
		string food;
	    string drink;
	    void buildFood()
	    {
		    meal.setFood(food);
	    }
	    void buildDrink()
	    {
		    meal.setDrink(drink);
	    }
	    int getMeal()
	    {
		    meal.getFood();
		    meal.getDrink();
	    }
	private:
	    Meal meal;
	
};


class KFCWaiter
{
	
	public:
		KFCWaiter()
		{
			
		}
		void setMealBuilder(string foo,string drin)
		{
			mb.food = foo;
			mb.drink = drin;
		}
		int construt()
		{
			mb.buildFood();
			mb.buildDrink();
			return mb.getMeal();
		}
	private:
		MealBuilder mb;
};





class SubMealBuilderA : public MealBuilder
{
	public :
		SubMealBuilderA()
		{
			
		}
		string food;
		string drink;
		void buildfood()
		{
			food = "hamburger";
		}
		void builddrink()
		{
			drink = "cola";
		}
		
};

class SubMealBuilderB : public MealBuilder
{
	public :
		SubMealBuilderB()
		{
			
		}
		string food;
		string drink;
		void buildfood()
		{
			food = "chickenrolls";
		}
		void builddrink()
		{
			drink = "orangejuice";
		}
};




int main()
{
	string menu;
	printf("ÇëÑ¡ÔñÌ×²Í£º£¨A/B£©£¿\n");
	cin>>menu;
	if(menu=="A")
	{
		SubMealBuilderA s;
	    KFCWaiter k;
	    s.buildfood();
	    s.builddrink();
	    k.setMealBuilder(s.food,s.drink);
	    k.construt();
	}
	if(menu=="B")
	{
		SubMealBuilderB s;
	    KFCWaiter k;
	    s.buildfood();
	    s.builddrink();
	    k.setMealBuilder(s.food,s.drink);
	    k.construt();
	}

return 0;

	
}
