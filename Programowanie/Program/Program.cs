using ObjectConsoleApp;

PointStruct firstPointStruct;
firstPointStruct.x = 5;
firstPointStruct.y = 6;

Console.WriteLine($"firstPointStruct ({firstPointStruct.x} , {firstPointStruct.y})");

PointStruct secondPointStruct = firstPointStruct;
secondPointStruct.x = 7;

Console.WriteLine($"firstPointStruct ({firstPointStruct.x} , {firstPointStruct.y})");
Console.WriteLine($"secondPointStruct ({secondPointStruct.x} , {secondPointStruct.y})");

void ParametrTestStruct_v1(PointStruct ps)
{
    Console.WriteLine($"firstPointStruct ({ps.x} , {ps.y})");
    ps.x = 99;
    Console.WriteLine($"firstPointStruct ({ps.x} , {ps.y})");
}
void ParametrTestStruct_v2(ref PointStruct ps)
{
    Console.WriteLine($"firstPointStruct ({ps.x} , {ps.y})");
    ps.x = 99; 
    Console.WriteLine($"firstPointStruct ({ps.x} , {ps.y})");
}


ParametrTestStruct_v1(firstPointStruct);
Console.WriteLine($"firstPointStruct ({firstPointStruct.x} , {firstPointStruct.y})");
ParametrTestStruct_v2(ref firstPointStruct);
Console.WriteLine($"firstPointStruct ({firstPointStruct.x} , {firstPointStruct.y})");

PointClass firstPointClass = new PointClass();
firstPointClass.x = 15;
firstPointClass.y = 16;
Console.WriteLine($"firstPointClass ({firstPointClass.x} , {firstPointClass.y})");

PointClass secondPointClass = firstPointClass;
secondPointClass.x = 17;
Console.WriteLine($"firstPointClass ({firstPointClass.x} , {firstPointClass.y})");
Console.WriteLine($"firstPointClass ({secondPointClass.x} , {secondPointClass.y})");

void ParametrTestClass_v1(PointClass pc)
{
    Console.WriteLine($"firstPointClass ({pc.x} , {pc.y})");
    pc.x = 79;
    Console.WriteLine($"firstPointClass ({pc.x} , {pc.y})");
}
ParametrTestClass_v1(firstPointClass);
Console.WriteLine($"firstPointClass ({firstPointClass.x} , {firstPointClass.y})");

void ParametrTestClass_v2(PointClass pc)
{
    Console.WriteLine($"firstPointClass ({pc.x} , {pc.y})");
    pc.x = 79;
    Console.WriteLine($"firstPointClass ({pc.x} , {pc.y})");
}

ParametrTestClass_v2(firstPointClass);
Console.WriteLine($"firstPointClass ({firstPointClass.x} , {firstPointClass.y})");