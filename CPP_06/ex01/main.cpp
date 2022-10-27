#include <iostream>
#include <string>

struct Data {
    std :: string   info;
    int             id;
};

uintptr_t serialize(Data* ptr) {
	uintptr_t res = reinterpret_cast<uintptr_t>(ptr);
	return res;
}

Data* deserialize(uintptr_t raw) {
	Data *res = reinterpret_cast<Data *>(raw);
	return res;
}

int main(void) {
	Data	*oldData = new Data, *newData;
	uintptr_t raw;
	
	oldData->id = 1;
	oldData->info = "Try me beatch";
	std :: cout << "id: " << oldData->id << "\ninfo: " << oldData->info << std :: endl;
	std :: cout << "result of serialisation" << std :: endl;
	raw = serialize(oldData);
	std :: cout << raw << std :: endl;
	std :: cout << "result of deserialisation" << std :: endl;
	newData = deserialize(raw);
	std :: cout << "id: " << newData->id << "\ninfo: " << newData->info << std :: endl;
	delete newData;
	return 0;
}
