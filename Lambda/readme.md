# Lambda

简单来说，Lambda 是在需要一个函数的时候，但是又不想费神去定义一个函数的场合下使用，即匿名函数。  
包含两个概念:   
1.可以在表达式中直接定义一个函数，而不需要将定义函数和表达式分开，这样有助于将逻辑更紧凑的表达出来。  
2.引入闭包的概念。  
优点是可读性更好  

std::function<int(SceneUser&member)> fun = [this, &event] (SceneUser &member)->int  
{  
  this->execute(member,event);  
  return 0;  
}  

//[this, &event] 捕获列表  
//SceneUser &member 参数列表  
// -> return type  
[]叫做捕获说明符，表示一个lambda表达式的开始。  
接下来是参数列表，即这个匿名的lambda函数的参数，  
->return-type表示返回类型，如果没有返回类型，则可以省略这部分。  
最后就是函数体部分了  
详见http://blog.csdn.net/booirror/article/details/26973611  
