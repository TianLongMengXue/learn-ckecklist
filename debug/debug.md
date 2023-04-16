# java

## ConcurrentModificationException

（1）错误原因：当遍历一个 `ArrayList` 或者 `HashMap` 并对其中的元素执行删除错误时，就会提示 `java.util.ConcurrentModificationException` 错误。

（2）使用 `CopyOnWriteArrayList` 替换 `ArrayList` ；

```java
List<UserEntity> list = new ArrayList<>();
// 替换为
CopyOnWriteArrayList<UserEntity> list = new CopyOnWriteArrayList<>();
```

（3）使用迭代器对象 ` Iterator ` 对 `ArrayList` 进行遍历并删除元素；

```java
List<UserEntity> list = new ArrayList<>();

Iterator<UserEntity> iterator = list.iterator();
while (iterator.hasNext()) { // 若是list中还有元素,while循环持续
    UserEntity userEntity = iterator.next();
    if (userEntity.getValue() < 10) {
        iterator.remove(); // 删除当前元素
    }
}
```

使用迭代器对象 ` Iterator ` 对 `ArrayList` 进行遍历并删除元素，在单线程环境中，其效率是要远高于使用 `CopyOnWriteArrayList` ，**但是在多线程环境中**，仍会提示 `java.util.ConcurrentModificationException` 错误；此时可使用如下的方式：

```java
public class test {

    public static void main(String[] args) {
        /** 初始化集合类*/
        ArrayList<TestObj> list = new ArrayList<>();
        for (int i = 0; i < 10000000; i++) {
            list.add(new TestObj(i));
        }
        
        // 将 ArrayList 对象作为参数传递给 CopyOnWriteArrayList 可以节省 CopyOnWriteArrayList 初始化的时间,CopyOnWriteArrayList 每次修改数据都会复制一个新的数组
        CopyOnWriteArrayList<TestObj> list1 = new CopyOnWriteArrayList<>(list);
        
        /**启动一个线程随机删除数据*/
        new Thread(new ThreadClass(list1)).start();

        /** 遍历元素*/
        Iterator<TestObj> iterator = list1.iterator();
        while (iterator.hasNext()) {
            TestObj testObj = iterator.next();
        }
    }
}


class ThreadClass implements Runnable {

    List<TestObj> list;

    public ThreadClass(List<TestObj> list) {
        this.list = list;
    }

    @Override
    public void run() {
        while (true) {
            int index = new Random().nextInt(list.size());
            list.remove(index);
        }
    }
}
```

（3）使用迭代器 `Iterator` 和 ` ConcurrentHashMap ` 遍历 `Map` 并删除元素；

```java
public class test {
    public static void main(String[] args) {
        /** 初始化集合类*/
        ConcurrentHashMap<Integer, TestObj> map = new ConcurrentHashMap<>();
        for (int i = 0; i < 1000000; i++) {
            map.put(i, new TestObj(i));
        }

        /**启动一个线程随机删除数据*/
        new Thread(new ThreadClass1(map)).start();

        /** 遍历元素*/
        Iterator<TestObj> iterator = map.values().iterator();
        while (iterator.hasNext()) {
            TestObj testObj = iterator.next();
        }

        System.out.println("end");
    }
}

class ThreadClass1 implements Runnable {

    Map<Integer, TestObj> map;

    public ThreadClass1(Map<Integer, TestObj> map) {
        this.map = map;
    }

    @Override
    public void run() {
        while (true) {
            if (map.size() > 0) {
                int index = new Random().nextInt(map.size());
                map.remove(index);
            }
        }
    }
}
```



# Mybatis

## NullPointerException

（1）检查 SQL 语句中的字段

- `#{}` 参数的名称是否与映射接口方法中的参数名称或者注解 `@Param` 别名保持一致；
- SQL 语句中使用的字段名称是否与数据库表中的字段名称保持一致，大小写也要注意；
- SQL 语句中使用的字段名称和数据库表名称是否使用 **``** 包含，防止发生名称和数据库中关键字重复，导致冲突错误；
- 属性 `resultType` 和 `ResultMap` 是否混用了。

（2）使用mapper时没有添加注解`@Autowire`

```java
@Autowire
private LoginMapper loginMapper;
```

`@Autowire` 报错导致的 `NullPointerException` ，虽然报错，项目运行没有问题。可是只有紧挨`@Autowire` 的一个起作用，下面的都没有注入成功。这时需要在每一个注入的 Mapper 中都加上`@Autowire` 。

（3）检查字符编码

检查数据库、数据库表、数据库表的字段编码是否一致。

（4）开启 spring 的日志输出

在 spring + mybatis 组合中，在控制台输出 SQL 语句的输出情况，在文件 **application.yaml** 中添加 `logging.level.com.e3e4e20.mapper=debug` （若是映射接口文件存放这个目录 `com.e3e4e20.mapper` 下）。

（5）List All elements are null

当一个 **List** 显示 **List All elements are null** 时，虽然输入为 **null** ，但是 `list.size()=1` ，对于这种情况，使用 `list==null` 或者 `list.isEmpty()` 或者 `list.size()` 都无法判断该 **List** 是否为空。

对于这种情况的错误，可以使用 `list.remove(null)` 方式。

