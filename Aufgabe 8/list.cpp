#include <iostream>
#include <string.h>
using namespace std;
#include "list.hpp"

// ENGLISCHE FORMAT PARCER FUNKITION
Rational NumberFormatEN::parce (string str)
{

  try
  {

    char
      c = ',';    //TRY CATCH SUCHT NACH FALSCHE EINGABEN
    char
      _c = '.';
    size_t
      found = str.find (c);
    size_t
      _found = str.find (_c);
    string s = str;
    s.erase (_found);



    int
      a = s.size ();

    if (found > _found)
      {
	if (s.size () <= 5 && found > 4 && found < 1000)
	  throw
	    _found;
	else
	  {
	    if (s.size () >= 4)
	      str.erase (str.begin () + found);
	    string
	      probe = str;

	    value = stod (str);

	  }
      }

    else if (found < _found)
      if (s.size () > 5)
	{
	  throw
	    _found;

	}

      else
	{
	  if (s.size () >= 4)
	    str.erase (str.begin () + found);
	  string
	    probe = str;

	  value = stod (str);

	}
  }
  catch (size_t t)
  {

    cout << "there is a mistake";
    exit (0);
  }

  double
    d = value - (int) value;
  while (d != 0.0)
    {
      value *= 2;         //UMWANDLUNG IN RATIONALER WERT
      n *= 2;
      d = value - (int) value;
    }


  zaeler = value;
  nenner = n;

  kuerzen ();
}

string NumberFormatEN::format(Rational * r)
{

  int
    x = r->getZaeler ();
  int
    y = r->getNenner ();
  x = zaeler;
  y = nenner;              //UMWNADELN VON RATIONALER ZAHL TO STRING

  a = std::to_string (x);
  b = std::to_string (y);
  c = a + "/" + b;
  return c;

}

void
NumberFormatEN::kuerzen ()
{

  int r;
  int p = zaeler;
  int q = nenner;
  do
    {               //VERKÜRZUNG DES BRUCHES
      r = p % q;
      p = q;
      q = r;

    }
  while (r != 0);

  zaeler /= p;
  nenner /= p;
}

// DEUTSCHE  FORMAT PARCER FUNKITION
Rational NumberFormatDE::parce (string str)
{

  try
  {

    char
      c = '.';
    char
      _c = ',';
    size_t
      found = str.find (c);
    size_t                     //TRY CATCH SUCHT NACH FALSCHE EINGABEN
      _found = str.find (_c);
    string
      s = str;
    s.erase (_found);

    int
      a = s.size ();




    if (found > _found)
      {
	if (s.size () <= 5 && found > 2 && found < 1000)
	  {

	    throw
	      found;
	  }
	else if (s.size () <= 5 && found > 2 && found > 1000)
	  {
	    str.replace (_found, 1, _found, c);

	  }
      }

    else
      {
	if (s.size () >= 4)
	  {
	    str.replace (_found, 1, ".");
	    string
	      proba = str;
	    str.erase (str.begin () + found);
	  }
      }



    string
      proba = str;

    value = stod (str);






  }
  catch (size_t t)
  {

    cout << "there is a mistake";
    exit (0);
  }

  double
    d = value - (int) value;
  while (d != 0.0)
    {
      value *= 2;
      n *= 2;
      d = value - (int) value;       //UMWANDLUNG IN RATIONALER WERT
    }


  zaeler = value;
  nenner = n;

  kuerzen ();
}

string NumberFormatDE::format(Rational * r)
{

  int
    x = r->getZaeler ();
  int
    y = r->getNenner ();
  x = zaeler;
  y = nenner;
                             //UMWNADELN VON RATIONALER ZAHL TO STRING
  a = std::to_string (x);
  b = std::to_string (y);
  c = a + "/" + b;
  return c;

}

void
NumberFormatDE::kuerzen ()
{

  int r;
  int p = zaeler;
  int q = nenner;
  do
    {
      r = p % q;
      p = q;             //VERKÜRZUNG DES BRUCHES
      q = r;

    }
  while (r != 0);

  zaeler /= p;
  nenner /= p;
}


string Rational::toString ()
{
  return opa->format(this);
}
