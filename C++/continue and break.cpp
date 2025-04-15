#include <iostream>
using namespace std;

int main() {
int i = 0;
int j=0;
while (i < 10) {
if (i == 4) {
i++;
continue;
}
cout << i << "\n";
i++;
}

while (j < 10) {
if (j == 6) {
j++;
continue;
}
cout << j << "\n\t\t";
j++;}


return 0;

}

