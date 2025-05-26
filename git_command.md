#week 1 learning
start to learn how to upload file to github
git add file name to add the file.
git status to check the file status.
git commit -m "message".
git log to check the log
git log --oneline to visit the simple log
git diff "code" "file name"

關於文件的刪除,同樣需要用git add 加文件名.
然後用git commit -m拍一個快照

git checkout “code” “file name”
這個可以將文件還原到某個地方

如果有不需要上傳的文件,可以新增一個文件叫“.gitignore"
然後在文件裡面輸入不需要上傳的文件名