void chicken()
{
  clear();
  printf("We both got buckets of chicken. Wanna do it?\n");
  #ifdef _WIN32
    Sleep(4000);
  #else
    sleep(4);
  #endif
  printf("Sure.\n");
  #ifdef _WIN32
    Sleep(1000);
  #else
    sleep(1);
  #endif
  success(5);
}