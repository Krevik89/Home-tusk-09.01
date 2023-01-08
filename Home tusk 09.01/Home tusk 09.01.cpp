#include <iostream>
#include <iomanip>

using namespace std;

void teninfive();
void sumarr();
void Week();

int main()
{
	setlocale(LC_ALL, "");

	//teninfive();  //Задание 1
	//sumarr();     //Задание 2
	//Week();       //Задание 3
	const int m = 12;
	int arr[m]{ 1,2,3,4,5,6,7,8,9,10,11,12 };
	float arr1[m];
	float arr2[m];
	int deposit;
	int n;
	cout << "Введите курс доллара к евро  за  " << endl;
	for (int i = 0; i < m; i++)
	{
		cout<< arr[i] << " месяц " <<"  ";
		cin >> arr1[i];
	}
	cout << endl;
	cout << "Введите начисленные проценты  за  " << endl;
	for (int i = 0; i < m; i++)
	{
		cout << arr[i] << " месяц " << "  ";
		cin >> arr2[i];
	}
	cout << endl;
	cout << "Введите сумму на депозите " << endl;
	cin >> deposit; 
	cout << "Введите номер месяца в котором хотите вывести " << endl;
	cin >> n;
	float sumdollar = (1 / arr1[n - 1]) * (deposit / 100) * arr2[n - 1];
	if (sumdollar >= 500) {
		cout << "Снять можно : " << (sumdollar) / 2 << " $" << endl;
	}
	else {
		cout << "Нельзя снять сумма % меньше 500 " << " $" << endl;
	}
	
}

void Week() {
	const int N_DAYS = 7;
	double sum = 0;
	double sumsr = 0;
	double day100 = 0;
	double arr[N_DAYS];
	string daysweek[N_DAYS] = { "Понедельник", "Вторник", "Среда",
	"Четверг", "Пятница", "Суббота", "Воскресенье" };

	for (int i = 0; i < 7; i++)
	{
		cout << daysweek[i] << " = ";
		cin >> arr[i];
		sum += arr[i];
		sumsr = sum / 7;

	}
	printf("Средняя (за неделю) потраченная сумма =  %.2f", sumsr, "$"); cout << endl;
	cout << "Общая (за неделю) потраченная сумма = " << sum << "$" << endl;
	cout << "День в котором привысила 100 $ : ";
	for (int i = 0; i < 7; i++) {
		if (arr[i] > 100)
		{
			cout << daysweek[i] << ' ';
		}
	}
	cout << endl;
}
void teninfive() {
	const int Ten = 10;
	const int five = 5;
	int arr[Ten], arr1[five], arr2[five];
	srand(time(NULL));
	for (int i = 0; i < Ten; i++)
	{
		arr[i] = 1 + rand() % 50;
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < five; i++)
	{
		arr1[i] = arr[i];
		arr2[i] = arr[i + 5];
	}
	for (int i = 0; i < five; i++)
	{
		cout << arr1[i] <<setw(5) << arr2[i] << "\n";
	}
}
void sumarr() {
	const int m = 10;
	int arr[m];
	int arr1[m];
	int arr2[m];
	srand(time(NULL));

	for (int i = 0; i < m; i++)
	{
		arr[i] = 1 + rand() % 50;
		cout << arr[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < m; i++)
	{
		arr1[i] = 1 + rand() % 50;
		cout << arr1[i] << " ";
	}
	cout << endl<<endl;
	for (int i = 0; i < m; i++)
	{
		arr2[i] = arr[i] + arr1[i];
		cout << arr2[i] << " ";
	}
}
