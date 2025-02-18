#include <cstdlib>
#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

#define fs filesystem
#define str string
#define sys system

int main(int argc, char *argv[]) {
  chdir(str("x86_64").c_str());
  sys("repo-add -s -n -R chaos-core.db.tar.xz *.pkg.tar.zst");
  sys("rm chaos-core.db");
  sys("rm chaos-core.db.sig");
  sys("rm chaos-core.files");
  sys("rm chaos-core.files.sig");
  sys("mv chaos-core.files.tar.xz chaos-core.files");
  sys("mv chaos-core.files.tar.xz.sig chaos-core.files.sig");
  sys("mv chaos-core.db.tar.xz chaos-core.db");
  sys("mv chaos-core.db.tar.xz.sig chaos-core.db.sig");
  return 0;
}
