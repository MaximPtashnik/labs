int function(int []);

int main()
{
	int a[10] = {5, 10, 3, 65, 96, 23, 43, 92, 100, 58}, result;
	result = function(a);
	return 0;
}

int function (int a[])
{
	int result = 0, i;
	for (i = 0; i < 10; i++)
        {
                result = result + a[i];
        }
        result = result/10;
	return result;
}

