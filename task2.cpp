// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
#include <string>

struct predmet {
    std::string name;
    std::string data;
    std::string prepodavatelb;
};

struct zachetka {
    
    std::vector<predmet> predmets;
};

struct stydent {
    
    std::string first_name;
    std::string last_name;
    std::string data;
    zachetka zch;
};

int main() {

    std::vector<stydent> group;
    
    int stydent_count;
    std::cout << "Enter stydent_count: ";
    std::cin >> stydent_count;
    
    for (int i = 0; i < stydent_count; ++i) {
        
        group.emplace_back();
        
        std::cout << "Enter stydent first_name: ";
        std::cin >> group.back().first_name;
        std::cout << "Enter stydent last_name: ";
        std::cin >> group.back().last_name;
        std::cout << "Enter stydent data: ";
        std::cin >> group.back().data;
        
        int predemet_count;
        std::cout << "Enter predemet_count:";
        std::cin >> predemet_count;
        
        for (int j = 0; j < predemet_count; ++j) {
            group.back().zch.predmets.emplace_back();
            std::cout << "Enter predmet name: ";
            std::cin >> group.back().zch.predmets.back().name;
            std::cout << "Enter predmet data: ";
            std::cin >> group.back().zch.predmets.back().data;
            std::cout << "Enter predmet prepodavatelb: ";
            std::cin >> group.back().zch.predmets.back().prepodavatelb;
        }
    }
    // так как у всех сдутентов дата сдачи экзаменов в одинакова, то чтобы получить информацию о дате сдачи экзамено достаточно зачетки одного студента
    for(auto pr : group.at(0).zch.predmets) {
        
        std::cout << "Name: " << pr.name << " data: " << pr.data << " prepodavatelb: " << pr.prepodavatelb << std::endl;
    }
    return 0;
}