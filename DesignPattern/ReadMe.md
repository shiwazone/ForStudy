设计模式原则

　　1）开闭原则（Open Close Principle）

　　　　开闭原则的意思是：对扩展开放，对修改关闭。在程序需要进行拓展的时候，不能去修改原有的代码。

　　2）里氏代换原则（Liskov Substitution Principle）

　　　　里氏代换原则是面向对象设计的基本原则之一。 里氏代换原则中说，任何基类可以出现的地方，子类一定可以出现。LS里氏代换原则是对开闭原则的补充。实现开闭原则的关键步骤就是抽象化，而基类与子类的继承关系就是抽象化的具体实现，所以里氏代换原则是对实现抽象化的具体步骤的规范。

　　3）依赖倒转原则（Dependence Inversion Principle）

　　　　这个原则是开闭原则的基础，具体内容：针对接口编程，依赖于抽象而不依赖于具体。

　　4）接口隔离原则（Interface Segregation Principle）

　　　　使用多个隔离的接口，比使用单个接口要好。它还有另外一个意思是：降低类之间的耦合度。由此可见，其实设计模式就是从大型软件架构出发、便于升级和维护的软件设计思想，它强调降低依赖，降低耦合。

　　5）迪米特法则，又称最少知道原则（Demeter Principle）

　　　　最少知道原则是指：一个实体应当尽量少地与其他实体之间发生相互作用，使得系统功能模块相对独立。

　　6）合成复用原则（Composite Reuse Principle）

　　　　合成复用原则是指：尽量使用合成/聚合的方式，而不是使用继承。


设计模式学习笔记（总结篇：模式分类）
   GOF根据模式的目标将模式分为三个类目：创建型、行为型和结构型。

 

1 创建型模式

  创建型模式设计对象的实例化，这类模式的特点是，不让用户依赖于对象的创建或排列方式，避免用户直接使用new运算符创建对象。

    GOF的23中模式中的下列5种模式属于创建型模式：

（1）工厂方法模式：定义一个用于创建对象的接口，让子类决定实例化哪一个类。Factory Method使一个类的实例化延迟到其子类。

（2）抽象工厂模式：提供一个创建一系列或相互依赖对象的接口，而无须指定它们具体的类。

（3）生成器模式：将一个复杂对象的创建与它的表示分离，使得同样的创建过程可以创建不同的表示。

（4）原型模式：将原型实例指定创建对象的种类，并且通过复制这些原型创建新的对象。

（5）单件模式：保证一个类仅有一个实例，并提供一个访问它的全局访问点。

 

 

2 行为型模式

    行为模式涉及怎样合理地设计对象之间的交互通信，以及怎样合理为对象分配职责，让设计富有弹性，易维护和易复用。

    GOF的23种模式中的下列11种模式属于创建型模式：

（1）责任链模式：使多个对象都有机会处理请求，从而避免请求的发送者和接收者之间的耦合关系。将这些对象连成一条链，并沿着这条链传递该请求，直到有一个对象处理它为止。

（2）命令模式：将一个请求封装为一个对象，从而可用不同的请求对客户进行参数化；对请求排队或记录请求日志，以及支持可撤销的操作。

（3）解释器模式：给定一个语言，定义它文法的一种表示，并定义一个解释器，这个解释器使用该表示来解释语言中的句子。

（4）迭代器模式：提供一种方法顺序访问一个聚合对象中的各个元素，而又不需要暴露该对象的内部表示。

（5）中介者模式：用一个中介对象来封装一系列的对象交互。中介者使各对象不需要显示地相互引用，从而使其耦合松散，而且可以独立地改变它们之间的交互。

（6）备忘录模式：在不破坏封装性的情况下，捕获一个对象的内部状态，并在该对象之外保存这个状态，这样以后就可将该对象恢复到原先保存的状态。

（7）观察者模式：定义对象间的一种一对多的依赖关系，当一个对象的状态发生变化时，所有依赖于它的对象都得到通知并被自动更新。

（8）状态模式：允许一个对象在其内部状态改变时改变它的行为。对象看起来似乎修改了它的类。

（9）策略模式：定义一系列算法，把它们一个个封装起来，并且可使它们可以相互替换。策略模式使算法可独立于使用它的客户而变化。

（10）模板方法模式：定义一个操作中算法的骨架，而将一些步骤延迟到子类中。模板方法使子类可以不改变一个算法的结构即可定义该算法的某些特定步骤。

（11）访问者模式：表示一个作用于某对象结构中的各个元素的操作。它可以在不改变各个元素的类的前提下定义作用于这些元素的新操作。

 

 

3 结构型模式

    结构型模式涉及如何组合类和对象以形成更大的结构，和类有关的结构型模式设计如何合理地使用继承机制；和对象有关的结构型模式涉及如何合理地使用对象组合机制。

    GOF的23种模式中的下列7种模式属于创建型模式：

（1）适配器模式：将一个类的接口转换成客户希望的另外一个接口。Adapter模式使原本由于接口不兼容而不能一起工作的那些类可以一起工作。

（2）组合模式：将对象组合成数形结构以表示”部分-整体“的层次结构。Composite使用户对单个对象和组合对象的使用具有一致性。

（3）代理模式：为其他对象提供一种代理以控制对这个对象的访问。

（4）享元模式：运用共享技术有效地支持大量细粒度的对象。

（5）外观模式：为系统的一组接口提供一个一致的界面，外观模式定义了一个高层接口，这个接口使这一子系统更加容易使用。

（6）桥接模式：将抽象部分与它的实现部分分离，使它们都可以独立地变化。

（7）装饰模式：动态地给对象添加一些额外的职责，就功能来说装饰模式相比生成子类更为灵活。