void Print(ICollection *col){

   Iterator *li = col->getIterator();

   while(li->hasNext()){
      Data_t *elem = (Data_t *)(li->getCurrent());
      cout << elem << endl;
      li->next();
   } // while

   delete li;

} // Print