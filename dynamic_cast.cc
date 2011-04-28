bool IntKey::Equals(IKey *sk){

   IntKey *k = dynamic_cast<IntKey>(sk);
   if (k != null)
      return k->key == key;

   return false;

} // equals