# 📚 Week 3 – C++ OOP 學習計畫：進階 STL + 小專案實作

本週目標：
- ✅ 熟練 `map`、`pair`、`sort()` 等 C++ STL 工具
- ✅ 結合 OOP + STL 實作迷你系統（如圖書管理）
- ✅ 加強程式邏輯與英文技術輸入習慣
- ✅ 練習使用 GitHub 管理每週學習成果

---

## ✅ 每日任務列表

| 📅 日期 | 🎯 任務 | 🧠 學習重點 | 📁 檔案 |
|--------|--------|------------|-------------|
| Day 1 | 練習 `map<string, int>` 基本操作 | C++ STL：map 宣告、插入、查找 | `map_intro.cpp` |
| Day 2 | 設計學生成績查詢系統（使用 map） | `map.find()`、`for (auto &p : map)` | `student_score_map.cpp` |
| Day 3 | 學會 `sort()` 搭配 `vector<pair<string, int>>` | 排序邏輯與 lambda 寫法 | `sort_student_score.cpp` |
| Day 4 | 製作「簡易圖書管理系統」 | 綜合應用：class + vector + map | `library_system.cpp` |
| Day 5 | GitHub 上傳 + 筆記整理 | 統整學習成果 | `Week3_Notes.md` |
| Day 6 | 閱讀英文 STL 教學並摘要 | 強化技術英文閱讀能力 | `notes/stl_article_notes.md` |
| Day 7 | 撰寫一個成績系統挑戰題 | 綜合多功能：查詢 / 排序 / 顯示 | `score_system_challenge.cpp` |

---

## 📁 資料夾結構（Week3）

Week3/
├── map_intro.cpp
├── student_score_map.cpp
├── sort_student_score.cpp
├── library_system.cpp
├── score_system_challenge.cpp
├── Week3_Notes.md
└── notes/
└── stl_article_notes.md

---

## 📝 技能複習

- 熟練使用 `map[key] = value`, `map.find(key)`
- `vector<pair<>>` 的宣告與遍歷方式
- `sort()` 使用方式與 lambda 比較子撰寫
- 熟悉 `for (auto& e : container)` 範式
- GitHub 基礎使用（`add`, `commit`, `push`）

---

## ✅ 建議 commit message 範例

```bash
git add Week3/
git commit -m "feat: add map and sort exercises for week 3"
git push origin main



⸻

💬 備註
	•	若覺得排序邏輯困難，先以輸出為主，之後再優化程式邏輯。
	•	可加入 cin 輸入測試，增強互動性。
	•	建議結合 vector<Person*> 與 map 進行統計與查詢。

⸻

Happy coding 🎯 Keep learning and commit your progress!

---

需要我幫你同時產生 GitHub repo 結構、`.gitignore`、或自動產生每週資料夾？  
也可以幫你產出 `library_system.cpp` 範例骨架讓你練習完成 😄