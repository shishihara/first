    建造者模式可以很好的解决肯德基套餐问题，服务员根据顾客的要求，一步一步拼装套餐的成分，构成一份完整的套餐，然后返还给顾客。如果要增加新的套餐，
只需增加一个套餐类用来存放食物列表即可。如果需要增加食物列表里面没有的食物，就需要改动制作食物的方法，即meal类里面的内容，违反了开放封闭原则，如
果将工厂模式和建造者模式结合起来，应该可以解决这个问题，把制作食物的方法拿出来专门建一个类。不过我还没有实现，这里仅使用了建造者模式实现问题。
    
建造者模式可以很好的解决肯德基套餐问题，服务员根据顾客的要求，一步一步拼装套餐的成分，构成一份完整的套餐，然后返还给顾客。如果要增加新的套餐，只需增加一个套餐类用来存放食物列表即可。如果需要增加食物列表里面没有的食物，就需要改动制作食物的方法，即meal类里面的内容，违反了开放封闭原则，如果将工厂模式和建造者模式结合起来，应该可以解决这个问题，把制作食物的方法拿出来专门建一个类。不过我还没有实现，这里仅使用了建造者模式实现问题。
