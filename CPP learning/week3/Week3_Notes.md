Week3 知識點總結:
🔑 新知識重點

1. const auto& book : books 解釋

book 是 vector<Book> 中的每個元素。

auto 讓編譯器自動推斷型別。

& 表示引用，避免複製，提高效率。

const 表示不可修改。

2. book.title.find(keyword) != string::npos

find() 會回傳關鍵字在字串中的位置。

如果找不到會回傳 string::npos（代表 -1）。

!= string::npos 代表 "有找到"。

3. sort(books.begin(), books.end(), [](const Book& a, const Book& b) { return a.title < b.title; });

用 lambda 來自訂排序邏輯。

這裡是按照書名由小到大排序。

必須加分號結尾。

4. Library lib;

宣告一個名為 lib 的物件，型別是 Library 類別。

5. while (true)

無窮迴圈，直到用 break 結束。

常用於持續輸入直到使用者輸入結束條件（如 "end"）。

6. scores[name] = score;

將 name 當作 key，把 score 存進 map。

若 name 已存在，則覆蓋原本的分數。

7. scores.find(n) != scores.end();

判斷 n 是否存在於 map 中。

find() 回傳 iterator，若找不到就等於 end()。

8. average = static_cast<double>(sum) / scores.size();

static_cast<double> 把整數轉換成浮點數，避免整數除法被截斷。

scores.size() 回傳學生人數。

9. for(const auto& entry : scores) + entry.first

entry.first 是 map 中的 key（學生姓名）。

entry.second 是 map 中的 value（分數）。

10. vector<pair<string, int>> students = { ... }

宣告一個 vector，元素是 string 和 int 的 pair。

用來儲存學生姓名與分數。

11. sort(students.begin(), students.end(), [](const pair<string, int>& a, const pair<string, int>& b) {...})

自訂排序：分數升序，相同分數時依名字升序。

sort(students.begin(), students.end(), [](const pair<string, int>& a, const pair<string, int>& b){
    if (a.second == b.second)
        return a.first < b.first;
    return a.second < b.second;
});

12. 其他常見錯誤與提醒：

sort(...) 末尾要有分號 ;

Lambda 函式必須使用 [](...) { ... } 包起來。

建構子初始化語法：Book(...) : name(n), author(a), ... {}

for (const auto& book : books) 不可省略變數名。

cin 與 getline() 混用要注意換行符號問題。

