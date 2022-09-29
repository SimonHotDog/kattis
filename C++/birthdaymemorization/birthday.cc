#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <tuple>
#include <algorithm>

std::string RemoveLeadingZeros(std::string str) {
    return str.erase(0, std::min(str.find_first_not_of('0'), str.size()-1));
}

std::pair<int, int> ParseDate(std::string s) {
    int h = s.find("/");
    std::string t1 = RemoveLeadingZeros(s.substr(0, h));
    int day = std::stoi(t1);
    std::string t2 = RemoveLeadingZeros(s.substr(h+1, s.size()));
    int month = std::stoi(t2);
    std::pair<int, int> res;
    res.first = day, res.second = month;
    return res;
}

std::tuple<std::string, int, int, int> ParseInput() {
    std::tuple<std::string,int, int, int> res;

    std::string raw;
    std::string bugfix;
    char r[100] = {0};
    std::string name;

    //std::getline(std::cin, bugfix);
    std::getline(std::cin, raw, '\n');

    //space locations
    int s1;
    int s2;
    int sFix;

    s1 = raw.find(" ");

    //Get name
    name = raw.substr(0, s1);
    raw = raw.substr(s1+1, raw.size());

    //Get like
    std::string temp;
    sFix = raw.find(" ");
    temp = raw.substr(0, sFix);
    int like = std::stoi(temp);
    raw = raw.substr(sFix+1, raw.size());

    s2 = raw.find(" ");
    raw = raw.substr(s2+1, raw.size());

    //get day and month
    std::pair<int, int> date = ParseDate(raw);
    
    res = {name, like,  date.first, date.second};

    return res;

}

bool check(std::vector<int> v, int i) {
    if (std::find(v.begin(), v.end(), i) != v.end()) {
        return true;
    } else {
        return false;
    }
}

int getIndex(std::vector<int> v, int x) {
    auto it = find(v.begin(), v.end(), x);

    if (it != v.end()) {
        int index = it - v.begin();
        return index;
    } else {
        return -1;
    }
}

int getFirstOccurence(std::vector<int> v, int i) {
    auto itr = std::find(v.begin(), v.end(), i);
    if (itr == v.end()) {
        return -1; //Probably bad
    }
    auto index = std::distance(v.begin(), itr);
    return index;
}

int main() { //TODO. Debug sample 1!!
    int n;

    std::cin >> n;
    std::cin.ignore();

    std::vector<std::tuple<std::string, int, int>> results;

    std::vector<std::string> names;
    std::vector<int> days;
    std::vector<int> months;
    std::vector<int> likes;
    std::vector<int> uDay;
    std::vector<int> uMonth;

    for (int i = 0; i < n; i++) {
        std::tuple<std::string, int, int, int> k = ParseInput();
        
        std::string name = std::get<0>(k);
        int l = std::get<1>(k);
        int d = std::get<2>(k);
        int m = std::get<3>(k);


        if (check(days, d) && check(months, m)) {
            int index = getIndex(days, d);

            if(likes[index] < l) { //replace
                names[index] = name;
                likes[index] = l;
            } else {
                //names.insert(names.begin() + index +1, name);
                //likes.insert(likes.begin() + index + 1, l);
                //days.insert(days.begin() + index + 1, d);
                //months.insert(months.begin() + index + 1, m);
            }
        } else {
            names.push_back(name);
            likes.push_back(l);
            days.push_back(d);
            //uDay.push_back(d);
            months.push_back(m);
            //uMonth.push_back(m);
        }
    }

    std::vector<std::string> res;
    
    //Print section
    std::cout << names.size() << "\n";

    //Sort output
    std::sort(names.begin(), names.end());

    for (int i = 0; i < names.size(); i++) {
        std::cout << names[i] << "\n";
    }

}