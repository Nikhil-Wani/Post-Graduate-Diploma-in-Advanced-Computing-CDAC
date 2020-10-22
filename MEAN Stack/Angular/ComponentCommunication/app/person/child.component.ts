import { Component, Input, Output, EventEmitter  } from '@angular/core';
import { setFlagsFromString } from 'v8';


@Component({
 selector:'childtag',
 templateUrl:'./child.component.html',
 styleUrls:['./child.component.css']

})
export class ChildComponent{
    p={pid:12,pname:"Kishori"};
    @Input('pData') public msg;
    @Output() public myevent= new EventEmitter();

    onclickevent(){
        this.myevent.emit(this.p);
    }

}