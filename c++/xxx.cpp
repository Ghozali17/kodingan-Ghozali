#include <iostream>
using namespace std;

int main(){
	int $, $jumlahBilangan, $bilangan, $fibonacci;

  for ($i = 0; $i < $jumlahBilangan; $i++) {
    if ($i < 2) {
      $bilangan = $i;
    } else {
      $bilangan = $fibonacci[$i - 1] + $fibonacci[$i - 2];
    }
    array_push($fibonacci, $bilangan);
  }

  return $fibonacci;
}
