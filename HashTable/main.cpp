// Lab 13, driver file
HashTable z1(2);
z1.insert(2);
z1.insert(4);
z1.display();
HashTable z2(2);
z2.insert(4);
z2.insert(7);
z2.display();
HashTable z(5);
z=z1+z2;
z.display();

HashTable a1(3);
a1.insert(4);
a1.insert(5);
a1.insert(2);
a1.display();
HashTable a2(3);
a2.insert(2);
a2.insert(4);
a2.insert(5);
a2.display();
if(a1==a2)
    cout<<"Both are equal"<<endl;
else
    cout<<"Both are not equal"<<endl;



