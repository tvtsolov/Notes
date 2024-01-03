//Getters and Setters


====================================================
1. Basic Getter and Setter:

private int _value;

public int Value
{
    get { return _value; }
    set { _value = value; }
}
=====================================================
2. Auto-Implemented Property:

private string _name;

======================================================
3. Expression-Bodied Members:

public string Name
{
    get => _name;
    set => _name = value;
}

======================================================
4. Readonly Property:

private readonly DateTime _creationDate = DateTime.Now;

public DateTime CreationDate => _creationDate;

======================================================
5. Auto-Implemented Readonly Property:

public DateTime CreationDate { get; } = DateTime.Now;

======================================================
6. Using Private Setter (Read-Only Outside the Class):

private string _readOnlyValue;

public string ReadOnlyValue
{
    get { return _readOnlyValue; }
    private set { _readOnlyValue = value; }
}




