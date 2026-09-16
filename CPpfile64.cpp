 #include <iostream>
 #include <list>
 using namespace std;
  

    template <class T>
    void display( list<T> &lst)
    {
        list<int>::iterator iter;

        for (iter = lst.begin(); iter != lst.end(); iter++)
        {
            cout << (*iter) << "  ";
        }
    }
 
 
    int main()
    {
        // ## FIRST WAY TO CREATE A LIST ---------------------------------
        list<int> list1; // list of zero lenght

        list1.push_back(0);
        list1.push_back(1);
        list1.push_back(2);
        list1.push_back(3);

        //  To print the Elements 1st ******************************************

        list<int>::iterator itr;
        itr = list1.begin();

        cout << (*itr) << " ";
        itr++;

        cout << (*itr) << " ";
        itr++;

        cout << (*itr) << " ";
        itr++;

        cout << (*itr) << " \n\n";
        itr++;

        //  To print the Elements 2nd _________________________________________________________________________

        // list<int> :: iterator iter ;
        // for (iter = list1.begin();   iter != list1.end() ; iter ++  )
        // {
        //     cout<<(*iter)<<"  ";

        // }

        //  To print the Elements 3rd ________________________________________________________________________
        // display(list1) ;
        cout << "\n\n";

        // ##  exa mple of SIZE() function in list*********************************************************
        cout << "\n\n";
        cout << "The size of the list is : " << list1.size();




        // ## SECOND WAY TO CREATE A LIST ------------------------------------------------------------------

        list<int> list2(5); // Empty list of size 5
        list<int>::iterator it;
        it = list2.begin();

        cout << "\n\n";
        (*it) = 4;
        it++;
        (*it) = 5;
        it++;
        (*it) = 6;
        it++;
        (*it) = 7;
        it++;
        (*it) = 8;
        it++;

        display(list2);

        // ##  example of deleting function in list*********************************************************

        // cout << "\n\n";
        // cout<<"Deleting the element from LAST position \n";
        // list2.pop_back() ;
        // display(list2) ;

        // cout << "\n\n";
        // cout<<"Again Deleting the element from LAST position \n";
        // list2.pop_back() ;
        // display(list2) ;

        // cout << "\n\n";
        //  cout<<"Deleting the element from FIRST position \n";
        //  list2.pop_front() ;
        //  display(list2) ;

        //  cout << "\n\n";
        //  cout<<"Deleting the element from MIDDLE position \n";
        //  list2.remove(8) ;
        //  display(list2) ;
        
        // ##  example of Merge() function in list*********************************************************

        cout << "\n\n";
        cout << "After Merging list1 with list 2 \n";
        list2.merge(list1);
        cout << "\n\n";
        cout << "Displaying list1" << endl;
        display(list2);
        
        //       $$$ WARNING $$$$$ THE LIST2 AFTER MERGING WILL BE DELETED
        //   cout<<"Displaying list1"<<endl;
        //  display(list1) ;

        // ##  example of Reverse () function in list*********************************************************

        cout << "\n\n";
        cout << "Reversing the element from list 2 \n";
        list2.reverse();
        
                // ##  example of sort() function in list*********************************************************
        
                cout << "\n\n";
                cout << "Sorting the element from list 2 \n";
                list2.sort();
                display(list2);
        display(list2);
        
        // ##  example of swap () function in list*********************************************************
        
        cout << "\n\n";
        list1.swap(list2);
        cout << "Displaying list1 and list 2 after swaping them \n";
        cout << " list1" << endl;
        display(list1);
        cout << " list2" << endl;
        display(list2);
        
        // return 0;
        system( "pause");
    }