/* 
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


Drupal.theme.prototype.CToolsCustomModalDialog = function () {
    var html = ''
    html += '  <div id="ctools-modal">'
    html += '    <div class="ctools-modal-content">' // panels-modal-content
    html += '      <div class="modal-header">';
    html += '        <a class="close ctools-close-modal" href="#">X';
    html += '        </a>';
    html += '        <span id="modal-title" class="modal-title">&nbsp;</span>';
    html += '      </div>';
    html += '      <div id="modal-content" class="modal-content">';    
    html += '      </div>';
    //html += '      <div class="close-container"><a class="ctools-close-modal">Close</a></div>';
    html += '    </div>';
    html += '  </div>';
    return html;
}