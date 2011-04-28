En el .h:

   public:
      static <clase>* getInstance();

   private:
      static <clase>* instance;
      <clase>(); // constructor

En el .cc:

   <clase>* <clase>::instance = 0; // igual a null

   <clase>* <clase>::getInstance(){
      if(instance == 0)
         instance = new <clase>();

      return instance;
   } // getInstance