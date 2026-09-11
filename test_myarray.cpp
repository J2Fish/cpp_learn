#include "template_instance.hpp"
#include <cassert>
#include <string>

int main() {
    // ========== 测试1：构造函数 + 空数组 count ==========
    MyArray<int> arr(5);
    int cnt = arr.count();
    assert(cnt == 0);
    std::cout << "[PASS] 测试1: 空数组 count = " << cnt << std::endl;

    // ========== 测试2：尾插 + count ==========
    int a = 10, b = 20, c = 30;
    arr.append(a);
    arr.append(b);
    arr.append(c);
    cnt = arr.count();
    assert(cnt == 3);
    assert(arr[0] == 10);
    assert(arr[1] == 20);
    assert(arr[2] == 30);
    std::cout << "[PASS] 测试2: 尾插3个元素, count = " << cnt << std::endl;

    // ========== 测试3：尾删 + count ==========
    arr.pop();
    cnt = arr.count();
    assert(cnt == 2);
    assert(arr[0] == 10);
    assert(arr[1] == 20);
    std::cout << "[PASS] 测试3: 尾删1个元素, count = " << cnt << std::endl;

    // ========== 测试4：删完再插 ==========
    arr.pop();
    arr.pop();
    cnt = arr.count();
    assert(cnt == 0);
    int d = 99;
    arr.append(d);
    cnt = arr.count();
    assert(cnt == 1);
    assert(arr[0] == 99);
    std::cout << "[PASS] 测试4: 删完再插, count = " << cnt << std::endl;

    // ========== 测试5：数组全满 ==========
    MyArray<int> arr2(3);
    int x = 1, y = 2, z = 3;
    arr2.append(x);
    arr2.append(y);
    arr2.append(z);
    cnt = arr2.count();
    assert(cnt == 3);
    assert(arr2.get_len() == 3);
    std::cout << "[PASS] 测试5: 数组全满, count = " << cnt << std::endl;

    // ========== 测试6：get_len / get_count ==========
    assert(arr.get_len() == 5);
    assert(arr.get_count() == 1);
    std::cout << "[PASS] 测试6: get_len=" << arr.get_len()
              << ", get_count=" << arr.get_count() << std::endl;

    // ========== 测试7：string 类型 ==========
    MyArray<std::string> strArr(3);
    std::string s1 = "hello";
    std::string s2 = "world";
    strArr.append(s1);
    strArr.append(s2);
    assert(strArr.count() == 2);
    assert(strArr[0] == "hello");
    assert(strArr[1] == "world");
    std::cout << "[PASS] 测试7: string 类型, count = " << strArr.count() << std::endl;

    // ========== 测试8：赋值运算符 ==========
    MyArray<int> arr3(3);
    int p = 100;
    arr3.append(p);
    arr3 = arr;  // 赋值
    assert(arr3.get_len() == 5);
    assert(arr3.get_count() == 1);
    assert(arr3[0] == 99);
    std::cout << "[PASS] 测试8: 赋值运算符" << std::endl;

    std::cout << "\n===== 全部测试通过! =====" << std::endl;
    return 0;
}