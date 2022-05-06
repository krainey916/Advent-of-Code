#include <algorithm>
#include <cstdint>
#include <cmath>
#include <fstream>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <utility>
#include <vector>
#include <chrono>
using namespace std;
using std::cout;

struct Bus1 {
   
    string sched1 = "7,13,x,x,59,x,31,19";
    string sched2 = "17,x,13,19";
    string sched3 = "67,7,59,61";
    string sched4 = "67,x,7,59,61";
    string sched5 = "67,7,x,59,61";
    string sched6 = "1789,37,47,1889";
    string sched7 = "41,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,x,37,x,x,x,x,x,557,x,29,x,x,x,x,x,x,x,x,x,x,419,x,x,19";
};

std::vector<std::pair<uint64_t, uint64_t>> split(const std::string& s, char delim = ',')
{
    std::vector<std::pair<uint64_t, uint64_t>> vec;

    std::string::size_type start = 0, end;
    int index = 0, value;
    size_t consumed;

    while ((start = s.find_first_not_of(delim, start)) != std::string::npos)
    {
        end = s.find(delim, start + 1);

        std::string sub = s.substr(start, end - start);

        try {
            value = std::stoi(sub, &consumed, 10);
            if (consumed == sub.size()) {
                vec.push_back(std::make_pair(value, index));
            }
        }
        catch (const std::invalid_argument&) {}
        catch (const std::out_of_range&) {}

        start = end;
        ++index;
    }

    return vec;
}



uint64_t fnStamp1(Bus1 &a) {
    std::vector<std::pair<uint64_t, uint64_t>> vec = split(a.sched1);
  
    uint64_t T = 0;
    uint64_t step = vec[0].first;

    vec.erase(vec.begin());

    int size = vec.size();
    while (true)
    {
        for (long i = 0; i < size; ++i)
        {
            uint64_t val = vec[i].first;
            uint64_t pos = vec[i].second;
            uint64_t delay = (val - T % val);
            if (delay == pos % val)
            {
                step *= val; //we can do that because all val are coprime. if it weren't, we need to calculate least common multiple
                size--;
                vec.erase(vec.begin() + i);
                i--;
            }
        }
        if (size == 0)
            return T;

        T += step;
    }
}

uint64_t fnStamp2(Bus1& a) {
    std::vector<std::pair<uint64_t, uint64_t>> vec = split(a.sched2);

    uint64_t T = 0;
    uint64_t step = vec[0].first;

    vec.erase(vec.begin());

    int size = vec.size();
    while (true)
    {
        for (long i = 0; i < size; ++i)
        {
            uint64_t val = vec[i].first;
            uint64_t pos = vec[i].second;
            uint64_t delay = (val - T % val);
            if (delay == pos % val)
            {
                step *= val; //we can do that because all val are coprime. if it weren't, we need to calculate least common multiple
                size--;
                vec.erase(vec.begin() + i);
                i--;
            }
        }
        if (size == 0)
            return T;

        T += step;
    }
}

uint64_t fnStamp3(Bus1& a) {
    std::vector<std::pair<uint64_t, uint64_t>> vec = split(a.sched3);

    uint64_t T = 0;
    uint64_t step = vec[0].first;

    vec.erase(vec.begin());

    int size = vec.size();
    while (true)
    {
        for (long i = 0; i < size; ++i)
        {
            uint64_t val = vec[i].first;
            uint64_t pos = vec[i].second;
            uint64_t delay = (val - T % val);
            if (delay == pos % val)
            {
                step *= val; //we can do that because all val are coprime. if it weren't, we need to calculate least common multiple
                size--;
                vec.erase(vec.begin() + i);
                i--;
            }
        }
        if (size == 0)
            return T;

        T += step;
    }
}

uint64_t fnStamp4(Bus1& a) {
    std::vector<std::pair<uint64_t, uint64_t>> vec = split(a.sched4);

    uint64_t T = 0;
    uint64_t step = vec[0].first;

    vec.erase(vec.begin());

    int size = vec.size();
    while (true)
    {
        for (long i = 0; i < size; ++i)
        {
            uint64_t val = vec[i].first;
            uint64_t pos = vec[i].second;
            uint64_t delay = (val - T % val);
            if (delay == pos % val)
            {
                step *= val; //we can do that because all val are coprime. if it weren't, we need to calculate least common multiple
                size--;
                vec.erase(vec.begin() + i);
                i--;
            }
        }
        if (size == 0)
            return T;

        T += step;
    }
}

uint64_t fnStamp5(Bus1& a) {
    std::vector<std::pair<uint64_t, uint64_t>> vec = split(a.sched5);

    uint64_t T = 0;
    uint64_t step = vec[0].first;

    vec.erase(vec.begin());

    int size = vec.size();
    while (true)
    {
        for (long i = 0; i < size; ++i)
        {
            uint64_t val = vec[i].first;
            uint64_t pos = vec[i].second;
            uint64_t delay = (val - T % val);
            if (delay == pos % val)
            {
                step *= val; //we can do that because all val are coprime. if it weren't, we need to calculate least common multiple
                size--;
                vec.erase(vec.begin() + i);
                i--;
            }
        }
        if (size == 0)
            return T;

        T += step;
    }
}

uint64_t fnStamp6(Bus1& a) {
    std::vector<std::pair<uint64_t, uint64_t>> vec = split(a.sched6);

    uint64_t T = 0;
    uint64_t step = vec[0].first;

    vec.erase(vec.begin());

    int size = vec.size();
    while (true)
    {
        for (long i = 0; i < size; ++i)
        {
            uint64_t val = vec[i].first;
            uint64_t pos = vec[i].second;
            uint64_t delay = (val - T % val);
            if (delay == pos % val)
            {
                step *= val; //we can do that because all val are coprime. if it weren't, we need to calculate least common multiple
                size--;
                vec.erase(vec.begin() + i);
                i--;
            }
        }
        if (size == 0)
            return T;

        T += step;
    }
}

uint64_t fnStamp7(Bus1& a) {
    std::vector<std::pair<uint64_t, uint64_t>> vec = split(a.sched7);

    uint64_t T = 0;
    uint64_t step = vec[0].first; // First Bus ID

    vec.erase(vec.begin());

    int size = vec.size();
    while (true)
    {
        for (int i = 0; i < size; ++i)
        {
            uint64_t val = vec[i].first;  // Next curr Bus ID from step
            uint64_t pos = vec[i].second; // Curr index 
            uint64_t delay = (val - T % val);
            if (delay == pos % val)
            {
                step *= val; //We can do that because all val are coprime. 
                size--;      //If they weren't, we would need to calculate 
                             //least common multiple.
                vec.erase(vec.begin() + i);
                i--;
                
            }
        }
        if (size <= 1)
            return step + T;

        T += step;
    }

  
}

int main() {

    Bus1 a;
    std::chrono::steady_clock::time_point begin = std::chrono::steady_clock::now();
    cout << "*************** Program Start *****************" << endl;
    cout << "Test case #1: " << fnStamp1(a) << endl;
    cout << "Test case #2: " << fnStamp2(a) << endl;
    cout << "Test case #3: " << fnStamp3(a) << endl;
    cout << "Test case #4: " << fnStamp4(a) << endl;
    cout << "Test case #5: " << fnStamp5(a) << endl;
    cout << "Test case #6: " << fnStamp6(a) << endl;
    cout << "Test case #7: " << fnStamp7(a) << endl;
    cout << endl;
    cout << "*************** Program End ********************" << endl;
    std::chrono::steady_clock::time_point end = std::chrono::steady_clock::now();
    cout << "Program Executed in, " <<
        std::chrono::duration_cast<std::chrono::microseconds>(end - begin).count() / 1000.00 << 
        " ms!" << endl;

}
