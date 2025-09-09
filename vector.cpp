#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> pairSum(vector<int> nums, int target)
{
    int n = nums.size();
    vector<int> ans;

    int i = 0, j = n - 1, sum = 0;

    while (true)
    {
        sum = nums[i] + nums[j];

        if (sum == target)
        {
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }
        else if (sum > target)
        {
            j--;
        }
        else
        {
            i++;
        }
    }
    return ans;
}

// Brute force approch

int findMajEl(vector<int> nums)
{
    int n = nums.size();

    for (int val : nums)
    {
        int count = 0;
        for (int el : nums)
        {
            if (val == el)
            {
                count++;
            }
        }
        if (count > n / 2)
        {
            return val;
        }
    }
}

// Optimised approch
int OfindmajEl(vector<int> &nums)
{
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int num : nums)
    {
        cout << num << " ";
    }
    cout << "\n";

    int ans = nums[0], count = 1;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] == nums[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
            ans = nums[i];
        }
        if (count > n / 2)
        {
            return ans;
        }
    }
    return ans;
}

double power(double x, int n)
{

    if (x == 1)
        return 1.0;
    if (x == -1 && n % 2 == 0)
        return 1.0;
    if (x == -1 && n % 2 != 0)
        return -1.0;
    if (x == 0)
        return 0.0;
    if (n == 0)
        return 1.0;

    double ans = 1;
    long binForm = n;

    if (n < 0)
    {
        x = 1 / x;
        binForm = -binForm;
    }

    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= x;
        }
        x *= x;
        binForm /= 2;
    }

    return ans;
}

int maxProfit(vector<int> &price)
{
    int n = price.size();

    int maxP = 0, bestBuy = price[0];

    for (int i = 1; i < n; i++)
    {
        if (price[i] > bestBuy)
        {
            maxP = max(maxP, price[i] - bestBuy);
        }

        bestBuy = min(bestBuy, price[i]);
    }

    return maxP;
}
int value(char ch)
{
    switch (ch)
    {
    case 'I':
        return 1;
        break;
    case 'V':
        return 5;
        break;
    case 'X':
        return 10;
        break;
    case 'L':
        return 50;
        break;
    case 'C':
        return 100;
        break;
    case 'D':
        return 500;
        break;
    case 'M':
        return 1000;
        break;
    default:
        return 0;
    }
}
int romanToInt(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int val = 0;
        val = value(s[i]);
        if (s[i] == 'I' && s[i + 1] == 'V')
        {
            val = 4;
            i += 2;
        }
        if (s[i] == 'I' && s[i + 1] == 'X')
        {
            val = 9;
            i++;
        }
        if (s[i] == 'X' && s[i + 1] == 'L')
        {
            val = 40;
            i++;
        }
        if (s[i] == 'X' && s[i + 1] == 'C')
        {
            val = 90;
            i++;
        }
        if (s[i] == 'C' && s[i + 1] == 'D')
        {
            val = 400;
            i++;
        }
        if (s[i] == 'C' && s[i + 1] == 'M')
        {
            val = 900;
            i++;
        }
        ans += val;
    }
    return ans;
}

string longestCommonPrefix(vector<string> &strs)
{
    string s = "";
    string strt = strs[0];
    for (int i = 0; i < strt.size(); i++)
    {
        s.push_back(strt[i]);
        for (string str : strs)
        {
            if (str[i] != s[i])
            {
                if (i == 0)
                {
                    return "";
                }
                else
                {
                    s.pop_back();
                    return s;
                }
            }
        }
    }
    return s;
}

int maxWater(vector<int> heights)
{
    int maxWaterCapacity = 0;
    for (int i = 0; i < heights.size(); i++)
    {
        for (int j = i + 1; j < heights.size(); j++)
        {
            maxWaterCapacity = max(maxWaterCapacity, (min(heights[i], heights[j]) * (j - i)));
        }
    }
    return maxWaterCapacity;
}

int omaxwater(vector<int> heights)
{
    int i = 0;
    int j = heights.size();
    int maxWaterCapacity = 0;

    while (i < j)
    {
        maxWaterCapacity = max(maxWaterCapacity, (min(heights[j], heights[i]) * (j - i)));
        i < j ? i++ : j--;
    }
    return maxWaterCapacity;
}

bool isValid(string s)
{
    vector<char> str;

    for (int i = 0; i < s.size(); i++)
    {
        cout << i << " : ";
        for (char st : str)
        {
            cout << st << " ";
        }
        cout << "\n";
        switch (s[i])
        {
        case '(':
            str.push_back(s[i]);
            break;
        case '[':
            str.push_back(s[i]);
            break;
        case '{':
            str.push_back(s[i]);
            break;
        case ')':
            if (str.size() == 0 || str.back() != '(')
            {
                return false;
            }
            else
            {
                str.pop_back();
            }
            break;
        case ']':
            if (str.back() != '[' || str.size() == 0)
            {
                return false;
            }
            else
            {
                str.pop_back();
            }
            break;
        case '}':
            if (str.back() != '{' || str.size() == 0)
            {
                return false;
            }
            else
            {
                str.pop_back();
            }
            break;
        }
    }
    if (str.size() != 0)
        return false;
    return true;
}

vector<int> productOfNumberExceptSelf(vector<int> nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);

    for (int i = 1; i < n; i++)
    {
        ans[i] = ans[i - 1] * nums[i - 1];
    }
    int suffix = 1;

    for (int j = n - 2; j >= 0; j--)
    {
        suffix = suffix * nums[j + 1];
        ans[j] = ans[j] * suffix;
    }

    return ans;
}

vector<int> product(vector<int> &nums)
{
    int n = nums.size();
    vector<int> ans(n, 1);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j)
                ans[i] *= nums[j];
        }
        // ans.push_back(pro);
    }
    return ans;
}

int returnK(vector<int> &nums, int val)
{
    int i = 0, j = 0;

    while (j < nums.size())
    {
        while (j < nums.size() && nums[j] != val)
        {
            j++;
            i++;
        }
        while (nums[j] == val)
        {
            j++;
        }
        nums.erase(nums.begin() + i, nums.begin() + j);
        j = i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == val)
        {
            nums.erase(nums.begin() + (i));
            i--;
        }
    }
    return nums.size();
}

int strstr (string h, string n){
    int index = -1,i=0;
    for(int j = 0; j< h.size(); j++){
        if(n[0] == h[j]){
            index = j;
            while(i < n.size()){
                if(n[i] == h[j]){
                    j++;
                    i++;
                }
                else{
                    i = 0;
                    j = index;
                    index = -1;
                    break;
                }
            }
            if(i == n.size()){
                return index;
            }
        }
    }
    return index;
}

int binarySearch(vector<int>& nums, int val){
    int st = 0, end = nums.size()-1;

    while (st <= end)
    {
        int mid = st + (end-st)/2;
        if(nums[mid] == val){
            return mid;
        }else if(nums[mid] > val){
            end = mid -1;
        }else{
            st = mid +1;
        }
    }

    return -1;
    
}
int main()
{
    vector<string> strs = {"flower", "fiow", "flight"};
    vector<int> nums = {1, 2, 3, 4, 5, 7, 9};
    // vector<int> ans = product(nums);

    // int prev = nums[0],k = 1;

    // for(int i = 1; i< nums.size(); i++){
    //     if(nums[i] == prev){
    //         nums.erase(nums.begin() + i);
    //         i--;
    //     }
    //     else{
    //         prev = nums[i];
    //         k++;
    //     }
    // }

    int val = 3;

    // for(int i =0; i<nums.size() ; i++){
    //     if(nums[i]==val){
    //         remove(nums.begin(),nums.end(),val);
    //         nums.pop_back();
    //     }
    // }
    // int k = returnK(nums,val);

    // for (int a : nums)
    // {
    //     cout << a << " ";
    // }
    // cout << "\n"
    //      << nums.size();

    // cout<<strstr("mississippi","pi");

    // cout<<binarySearch(nums,val);

    cout<<19%10;

    return 0;
}