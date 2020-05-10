#include <exception>


class My_exception : public std::exception {
    const char* what_arg;
public:
  My_exception(const char* what_arg)throw(){
    this->what_arg = what_arg;
  }
  ~My_exception() throw(){};

  const char* what() const throw() {
    return this->what_arg;
  }
};
