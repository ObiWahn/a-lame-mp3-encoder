#ifndef ALAMEMP3ENCODER_HELPER_H
#define ALAMEMP3ENCODER_HELPER_H

#include <stdexcept>
#include <string>
#include <vector>

namespace vscharf {

class posix_error : public std::exception {
public:
  posix_error(int err) : _err(err) {}
  virtual const char* what() const noexcept override;
private:
  int _err;
};

std::vector<std::string> directory_entries(const std::string& path);

} // namespace vscharf

#endif // ALAMEMP3ENCODER_HELPER_H