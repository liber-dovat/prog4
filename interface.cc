class Interface {

   public:
      virtual void operacion1()       = 0;
      virtual bool operacion2(bool A) = 0;
      ...
      virtual ~Interface(); // no es virtual puro

}; // interface