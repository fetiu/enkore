# enkore

> **En**glish **Ko**rean **re**versing converter

enkore는 한글-영어 간 변환기입니다.

예를들면, 다음과 같은 작업이 가능합니다.

```
dkssud -> 안녕
ㅗ디ㅣㅐ -> hello
햣gjqm -> git허브
```



## API



`enkore_eng2kor`: 문장 속의 영어 문자를 대응하는 한글 문자로 변환합니다. 한글 문자는 그대로 둡니다.

`enkore_kor2eng`: 문장 속의 한글 문자를 대응하는 영어 문자로 변환합니다. 영어 문자는 그대로 둡니다.

`enkore_reverse`: 한글과 영어가 섞인 문장 속에서, 한글 문자를 영어로, 영어 문자를 한글로 변환합니다.



## Reference

https://github.com/gomjellie/zsh-hangul/blob/master/data/gksdud_generator.py

https://github.com/ChalkPE/gksdud/blob/master/lib/gksdud.js

https://github.com/baehyunsol/korean_saying_generator/blob/master/korean.py

https://dojang.io/mod/page/view.php?id=770

https://github.com/ThrowTheSwitch/Unity

https://github.com/ThrowTheSwitch/Ceedling/blob/master/docs/CeedlingPacket.md

https://araikuma.tistory.com/599

http://www.cplusplus.com/reference/cwchar/