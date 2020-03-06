#include "exceptions_example.cpp"


int main()
{
   double v;
   try
   {
    cout<<"Input array size"<<endl;
    cin >>v;
    arr a(v);
    main_loop(a);
   }
  catch(general_error& e)
   {
     cout<<"The following fatal error occurred:"<<e.message<<endl;
   }
}
