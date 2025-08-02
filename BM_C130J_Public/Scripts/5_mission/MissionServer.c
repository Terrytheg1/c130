modded class MissionServer
{	
    void MissionServer()
    {	    
		if (GetGame().IsServer() && !GetGame().IsClient())
        {
		    g_HelicrashBase = null;
            GetHelicrashBase();
        }
    }
}

modded class MissionGameplay
{
	
    void MissionGameplay() 
    {
        if (GetGame().IsServer() && !GetGame().IsClient())
        {
            g_HelicrashBase = null;
            GetHelicrashBase();
        }
		
    }
	
	override void OnKeyPress( int key )
    {
        super.OnKeyPress( key );
    }
}
